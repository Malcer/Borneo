function setColour() {
	hue = Math.random();
	sat = Math.random() * 0.2 + 0.1;
	val = Math.random() * 0.1 + 0.88;

	document.body.style.background = hsvToRgb(hue, sat, val);
}

function hsvToRgb(h, s, v) {
	if (s == 0) {
		r = g = b = v;
		return formatRgb(r, g, b);
	}

	h = h * 6;
	i = Math.floor(h);
	f = h - i;
	p = v * (1 - s);
	q = v * (1 - s * f);
	t = v * (1 - s * (1 - f));

	switch(i) {
		case 1:
			r = q;
			g = v;
			b = p;
			break;
		case 2:
			r = p;
			g = v;
			b = t;
			break;
		case 3:
			r = p;
			g = q;
			b = v;
			break;
		case 4:
			r = t;
			g = p;
			b = v;
			break;
		case 5:
			r = v;
			g = p;
			b = q;
		default: // case 0
			r = v;
			g = t;
			b = p;
			break;
	}

	return formatRgb(r, g, b);
}

function formatRgb(r, g, b) {
	s_r = Math.min(Math.floor(r*256), 255);
	s_g = Math.min(Math.floor(g*256), 255);
	s_b = Math.min(Math.floor(b*256), 255);

	h_r = s_r.toString(16);
	h_g = s_g.toString(16);
	h_b = s_b.toString(16);

	h_r.length == 1 ? h_r = '0' + h_r : h_r = h_r;
	h_g.length == 1 ? h_g = '0' + h_g : h_g = h_g;
	h_b.length == 1 ? h_b = '0' + h_b : h_b = h_b;

	return '#' + h_r + h_g + h_b
}
