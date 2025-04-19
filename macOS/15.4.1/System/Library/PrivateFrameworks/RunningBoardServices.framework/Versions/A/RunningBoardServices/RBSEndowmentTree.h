@class NSString, NSMutableDictionary;

@interface RBSEndowmentTree : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSMutableDictionary *_tree;
}

@property (readonly, nonatomic) NSString *endowmentNamespace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endowmentTreeForLinks:(id)a0;
+ (id)endowmentTreeForNamespace:(id)a0;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)childrenLinks:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)rootLinks;

@end
