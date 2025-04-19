@class NSString, NSDictionary, NSArray;

@interface RUIXMLElement : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ attributtes;
    void /* unknown type, empty encoding */ stringValue;
    void /* unknown type, empty encoding */ mutableChildren;
    void /* unknown type, empty encoding */ mutableParent;
}

@property (nonatomic, readonly) NSString *xmlString;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSDictionary *attributtes;
@property (nonatomic, readonly) RUIXMLElement *parent;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, readonly) NSArray *children;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (void)appendChild:(id)a0;
- (void)appendChildren:(id)a0;
- (void)traverseWithDelegate:(id)a0;

@end
