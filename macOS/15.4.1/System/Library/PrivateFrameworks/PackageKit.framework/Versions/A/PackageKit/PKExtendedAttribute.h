@class NSString, NSData;

@interface PKExtendedAttribute : NSObject

@property (copy) NSString *name;
@property (copy) NSData *value;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 value:(id)a1;
- (BOOL)setOnFileAtPath:(id)a0 option:(int)a1;

@end
