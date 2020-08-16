with import <nixpkgs> {};

stdenv.mkDerivation {
  pname = "dwm";
  version = "6.2";
  src = ./.;

  buildInputs = [ xorg.libX11 xorg.libXinerama xorg.libXft ];

  prePatch = ''sed -i "s@/usr/local@$out@" config.mk'';

  buildPhase = " make ";
}
