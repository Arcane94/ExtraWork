// This file is part of GNOME Games. License: GPL-3.0+.

public class Games.Media : Object {
	public Title? title { get; private set; }

	private string[] uris;

	public Media (Title? title = null) {
		this.title = title;
		this.uris = {};
	}

	public string[] get_uris () {
		return uris;
	}

	public void add_uri (string uri) {
		uris += uri;
	}
}
