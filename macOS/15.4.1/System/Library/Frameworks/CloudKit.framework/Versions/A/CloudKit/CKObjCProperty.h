@class NSString, CKObjCType;

@interface CKObjCProperty : NSObject {
    Class _classHandle;
    unsigned long long _flags;
    NSString *_instanceVariableName;
}

@property (readonly, nonatomic) CKObjCType *type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SEL getterSelector;
@property (readonly, nonatomic) SEL setterSelector;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;

@end
