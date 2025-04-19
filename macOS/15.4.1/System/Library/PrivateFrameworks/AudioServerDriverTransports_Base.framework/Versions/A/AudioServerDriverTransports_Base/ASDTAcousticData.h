@class NSString, NSArray;

@interface ASDTAcousticData : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int dataType;
@property (retain, nonatomic) NSArray *entries;

+ (id)createWithSysCfgData:(id)a0 andType:(int)a1;

- (void).cxx_destruct;
- (id)initWithSysCfgData:(id)a0 andType:(int)a1;

@end
