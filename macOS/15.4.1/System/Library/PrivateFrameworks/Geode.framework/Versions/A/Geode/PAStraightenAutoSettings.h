@interface PAStraightenAutoSettings : IPAAutoSettings

@property (nonatomic) double yawAngleInDegreesCCW;
@property (nonatomic) double pitchAngleInDegreesCCW;
@property (nonatomic) double straightenAngleInDegreesCCW;
@property (nonatomic) long long xOrigin;
@property (nonatomic) long long yOrigin;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

- (BOOL)_applyArchiveDictionary:(id)a0;
- (void)_archiveIntoDictionary:(id)a0;

@end
