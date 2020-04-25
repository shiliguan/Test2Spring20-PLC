$x = 1;
sub sub1 {
    return $x;
}
sub static {
    my $x = 2;
    return sub1();
}
$y = 3;

sub sub2 {
    return $y;
}
sub dynamic{
    local $y = 4;
    return sub2();
}
print "static scope ", static(), "\n";
print "dynamic scope ", dynamic(), "\n";