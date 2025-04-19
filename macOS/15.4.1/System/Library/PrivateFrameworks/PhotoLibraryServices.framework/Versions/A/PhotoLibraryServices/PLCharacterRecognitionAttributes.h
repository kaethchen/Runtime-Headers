@class NSString, PLMediaAnalysisAssetAttributes, NSData, NSDate;

@interface PLCharacterRecognitionAttributes : PLManagedObject

@property (class, readonly, copy) NSString *algorithmVersionKey;

@property (readonly, nonatomic) short algorithmVersion;
@property (retain, nonatomic) NSData *characterRecognitionData;
@property (retain, nonatomic) NSData *machineReadableCodeData;
@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;

+ (id)entityName;

@end
