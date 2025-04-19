@class NSString;

@interface CKObjCType : NSObject

@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) NSString *encoding;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSString *className;

+ (id)typeForEncoding:(const char *)a0;
+ (id)typeForValue:(id)a0;

- (id)description;
- (id)initWithCode:(long long)a0;

@end
