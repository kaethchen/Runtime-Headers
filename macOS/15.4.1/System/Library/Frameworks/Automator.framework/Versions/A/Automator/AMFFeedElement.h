@class NSString, NSDictionary, NSMutableString, NSMutableDictionary;

@interface AMFFeedElement : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSString *namespaceURI;
@property (copy, nonatomic) NSMutableString *content;
@property (readonly, copy, nonatomic) NSMutableDictionary *children;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)childWithName:(id)a0;
- (void)addChildElement:(id)a0;
- (void)appendContent:(id)a0;
- (id)childrenWithName:(id)a0;
- (id)childrenWithName:(id)a0 namespace:(id)a1;
- (id)textOfChildWithName:(id)a0;
- (id)textOfChildWithName:(id)a0 namespace:(id)a1;

@end
