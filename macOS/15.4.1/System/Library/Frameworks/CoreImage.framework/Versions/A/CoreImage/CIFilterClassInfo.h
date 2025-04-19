@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (void)clearCache;
+ (id)cache;
+ (id)classInfoForClass:(Class)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithClass:(Class)a0;
- (id)inputKeys;
- (id)outputKeys;
- (id)inputClasses;

@end
