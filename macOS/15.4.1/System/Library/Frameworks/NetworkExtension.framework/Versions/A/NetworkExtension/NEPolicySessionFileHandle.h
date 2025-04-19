@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (id)dictionary;
- (unsigned long long)type;
- (id)initFromDictionary:(id)a0;
- (id)initWithPolicySession:(id)a0;
- (id)initWithPolicySession:(id)a0 name:(id)a1;

@end
