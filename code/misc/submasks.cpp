// loop through all submask of a given bitmask
// it does not include mask 0
for(int sub = mask; sub; sub = (sub - 1) & mask){

}

// loop through all supermasks of a given bitmask
for(int super = mask; super < (1 << n); super = (super + 1) | mask) {
  
}
