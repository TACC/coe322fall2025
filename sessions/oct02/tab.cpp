int main() {
vector<float> x = {3.0,4.0};
normalizeEX2(x);
cout << norm(x) << '\n';

float p = 2.0;
auto norm_function = [p](const vector<float> x) -> float {
float sum = 0.0;
for (float xi : x) {
sum += pow(abs(xi), p);
}
return pow(sum, 1.0 / p);
};

vector<float> y = {3.0,4.0};
normalizeEX3(y, norm_function);
return 0;
}

// How to fix indentation
// - set a region
// - indent region

// Region: is between cursor & "mark"
// C-<space>: set mark

// If there is a region, replace-string is limited to the region

// Quickly selecting the whole file:
// beginning of file, set mark, end of file

// ESC < : beginning of file
// ESC > : go to end of file

// ESC C-\ : indent-region
