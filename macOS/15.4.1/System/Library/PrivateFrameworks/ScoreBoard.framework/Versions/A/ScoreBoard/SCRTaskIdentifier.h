@class NSString;

@interface SCRTaskIdentifier : NSObject <NSCopying> {
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *name;

+ (id)new;
+ (id)identifier;
+ (id)identifierWithName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithName:(id)a0;

@end
