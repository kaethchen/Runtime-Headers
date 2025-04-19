@interface ABCDContact : CNCDContact

- (id)_firstAvailableValueForRelationship:(id)a0 key:(id)a1;
- (id)companyNameWithFormatter:(id)a0;
- (id)firstNameWithFormatter:(id)a0;
- (id)joinedName;
- (id)lastNameWithFormatter:(id)a0;
- (id)middleNameWithFormatter:(id)a0;
- (id)nameDelimiter;
- (unsigned long long)nameOrderWithFormatter:(id)a0;
- (id)nameWithFormatter:(id)a0 rangeOfSortingSubstring:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
