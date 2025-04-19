@interface NUChannelControlData : NUChannelData

@property (readonly, copy, nonatomic) id data;

+ (id)controlDataWithAdjustment:(id)a0;
+ (id)controlDataWithComposition:(id)a0;
+ (id)controlDataWithSetting:(id)a0 value:(id)a1;
+ (id)controlDataWithSource:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFormat:(id)a0;
- (id)initWithData:(id)a0 format:(id)a1;
- (id)initWithData:(id)a0 schema:(id)a1;
- (id)initWithSetting:(id)a0 value:(id)a1;

@end
