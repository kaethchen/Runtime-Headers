@class NSString;

@interface ABCNGroupIdentifier : NSObject <NSCopying>

@property (readonly) NSString *stringValue;

+ (id)identifierWithString:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0;

@end
