@class NSString, PLMediaAnalysisAssetAttributes, NSData, NSDate;

@interface PLVisualSearchAttributes : PLManagedObject

@property (class, readonly, copy) NSString *stickerConfidenceScoreKey;
@property (class, readonly, copy) NSString *algorithmVersionKey;
@property (class, readonly, copy) NSString *stickerConfidenceAlgorithmVersionKey;

@property (readonly, nonatomic) float stickerConfidenceScore;
@property (readonly, nonatomic) short algorithmVersion;
@property (readonly, nonatomic) short stickerConfidenceAlgorithmVersion;
@property (retain, nonatomic) NSData *visualSearchData;
@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;

+ (id)entityName;

@end
