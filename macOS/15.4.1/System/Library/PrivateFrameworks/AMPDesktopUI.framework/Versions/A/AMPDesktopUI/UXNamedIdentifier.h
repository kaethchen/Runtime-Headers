@class NSString;

@interface UXNamedIdentifier : UXID

@property (copy, nonatomic) NSString *name;

+ (id)newWithName:(id)a0 persistentID:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;

@end
