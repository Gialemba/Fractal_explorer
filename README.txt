### fractol

# description:
    fractal explorer still buggy but work
    don't judge my spagetty code plz i had a norm to respect D:

## start

./fractol D          <- or any other option 

available option :

| D   ->  Default
| J1  ->  Julia 1st variation
| J2  ->  Julia 2nd variation
| J3  ->  Julia 3nd variation
| J4  ->  Julia 4nd variation
| MB  ->  Mandelbrot
| BS  ->  Burning Ship

## key
    you can change them in the key_input.c file sorry for you no macro was made for changing them in the header :D
    { xev | grep keysym } :P

| esc         ->  close

# moovement :

| w           ->  moove up
| a           ->  moove left
| s           ->  moove down
| d           ->  moove right
| space       ->  zoom
| ctrl        ->  unzoom
| left_click  ->  center on the clicked point

# misc

| \            ->  randomise color "+" ___,--->  just play with them  
| ]            ->  randomize color "-" _/
| k            ->  going back to default color
| p            ->  play/pause animation made on certain fractal
| right_arrow  ->  next fractal
| left_arrow   ->  previous fractal
