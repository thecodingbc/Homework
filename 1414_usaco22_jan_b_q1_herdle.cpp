/*
http://www.usaco.org/index.php?page=viewproblem2&cpid=1179

------------------
Analysis
------------------

To make thing simpler, we can just use 2 vectors to store all 9 chars

v1: COWSAYMOO
v2: WINTHEIOI

then we can use dual pointers to point to the 2 vectors
we compare the 2 chars

step 1) we compare the 9 pairs one by one
if they are the same, green++, we need to avoid the pair to be added to the 2 maps

step 2) we also need 2 maps which summarize how many times a char appears in v1 or v2. so that we can calculate the count of yellow

map<char, in> mp1;
map<char, in> mp2;

mp1 = {
    'C' : 1,
    'O' : 3,
    'W' : 1
}

mp2 = {
    'O' : 1
}

I can just loop all the pairs of mp1.

*/
