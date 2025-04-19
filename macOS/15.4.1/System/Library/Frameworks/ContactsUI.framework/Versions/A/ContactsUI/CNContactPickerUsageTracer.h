@interface CNContactPickerUsageTracer : NSObject {
    unsigned long long _countOfContactsExpanded;
    unsigned long long _countOfGroupsViewed;
    unsigned long long _countOfLocalSearchesPerformed;
    unsigned long long _countOfServerSearchesPerformed;
}

- (void)sendTrace;
- (void)setValue:(unsigned long long)a0 forTracedKey:(id)a1 dictionary:(id)a2;
- (void)setCountOfContactsExpanded:(unsigned long long)a0;
- (void)setCountOfGroupsViewed:(unsigned long long)a0;
- (void)setCountOfLocalSearchesPerformed:(unsigned long long)a0;
- (void)setCountOfServerSearchesPerformed:(unsigned long long)a0;

@end
