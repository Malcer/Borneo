function getFavicons() {
	var main = document.getElementById('main');
	var links = main.firstChild.getElementsByTagName('a');

	for ( var i=links.length-1; i>=0; --i ) {
		var link = links[i];
		var href = link.getAttribute('href');

		var img = document.createElement('img');
		img.setAttribute('src', getRoot(href) + '/favicon.ico');

		link.insertBefore(img, link.firstChild);
	}
}

function getRoot(url) {
	var pos = url.indexOf('/');
	if ( url.indexOf('/', pos + 2) < 0 ) {
		return url
	} else {
	return url.substring(0, url.indexOf('/', pos + 2));
	}
}
