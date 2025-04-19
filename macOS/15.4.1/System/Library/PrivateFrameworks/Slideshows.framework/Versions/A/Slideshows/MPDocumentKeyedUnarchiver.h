@class NSDictionary, MPDocument;
@protocol MPAssetKeyDelegate;

@interface MPDocumentKeyedUnarchiver : NSKeyedUnarchiver

@property (nonatomic) id<MPAssetKeyDelegate> assetKeyDelegate;
@property (nonatomic) NSDictionary *mediaProperties;
@property (nonatomic) MPDocument *parentDocument;

@end
