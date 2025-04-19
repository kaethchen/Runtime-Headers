@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry

@property (readonly, nonatomic) unsigned int pacebin;
@property (readonly, nonatomic) double score;

- (id)description;

@end
