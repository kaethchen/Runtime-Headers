@class NSString;

@interface PLUtilityAssetClassification : NSObject <PNSceneClassification, NSCopying>

@property (nonatomic) double confidence;
@property (nonatomic) long long packedBoundingBox;
@property (nonatomic) unsigned long long extendedSceneIdentifier;
@property (nonatomic) long long classificationType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
