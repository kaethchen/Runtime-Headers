@class NSString, NSNumber;

@interface _GeneratedSignpostMetadata : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *signpostId;
@property (retain, nonatomic) NSNumber *beginMct;
@property (retain, nonatomic) NSNumber *endMct;
@property (retain, nonatomic) NSNumber *emitMct;
@property (retain, nonatomic) NSNumber *baseMct;
@property (nonatomic) BOOL hasRelativeMcts;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
