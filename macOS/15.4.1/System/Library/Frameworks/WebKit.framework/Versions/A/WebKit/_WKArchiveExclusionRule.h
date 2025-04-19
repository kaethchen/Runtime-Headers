@class NSString, NSArray;

@interface _WKArchiveExclusionRule : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _elementLocalName;
    struct RetainPtr<NSArray<NSString *>> { void *m_ptr; } _attributeLocalNames;
    struct RetainPtr<NSArray<NSString *>> { void *m_ptr; } _attributeValues;
}

@property (readonly, nonatomic) NSString *elementLocalName;
@property (readonly, nonatomic) NSArray *attributeLocalNames;
@property (readonly, nonatomic) NSArray *attributeValues;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithElementLocalName:(id)a0 attributeLocalNames:(id)a1 attributeValues:(id)a2;

@end
