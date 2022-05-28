int query(int a[], int n, int value)
{
	int mid, left, right;

	left = 0, right = n - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (value == a[mid]) {
			break;
		}
		else if (value < a[mid]) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}

	return mid;
}