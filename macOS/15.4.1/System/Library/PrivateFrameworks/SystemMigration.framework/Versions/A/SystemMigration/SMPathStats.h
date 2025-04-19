@interface SMPathStats : NSObject {
    unsigned long long allocatedSize;
    unsigned long long copierSize;
    unsigned long long fileCount;
}

- (void)add:(id)a0;
- (void)subtract:(id)a0;

@end
