@class NSString, NSData;

@interface _PLLazyPreheatData : NSData {
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)a0;

- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)a0;
- (void)_loadData;

@end
