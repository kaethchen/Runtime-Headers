@class NSString, NSDictionary;

@interface QCSCN_Parameter : NSObject {
    id _reserved;
}

@property (copy, nonatomic) NSString *semantic;
@property (retain, nonatomic) NSDictionary *options;

+ (id)parameter;
+ (id)parameterWithSemantic:(id)a0 options:(id)a1;

- (void)dealloc;
- (id)init;

@end
