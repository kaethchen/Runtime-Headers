@class NSUUID, TSCHReferenceLineNonStyle;

@interface TSCHReferenceLineNonStyleItem : NSObject

@property (retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle;
@property (readonly, nonatomic) NSUUID *uuid;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initFromUnarchiver:(id)a0 message:(const void *)a1;
- (id)initWithNonStyle:(id)a0 uuid:(id)a1;
- (void)saveToArchiver:(id)a0 message:(void *)a1;

@end
