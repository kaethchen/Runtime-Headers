@class VNBarcodeObservation, NSArray, VKQuad;

@interface VKCMRCDataDetectorElement : VKCBaseDataDetectorElement <NSSecureCoding> {
    NSArray *_boundingQuads;
    NSArray *_children;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VNBarcodeObservation *barcodeObservation;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (retain, nonatomic) VKQuad *quad;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) BOOL childrenCreated;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (id)children;
- (id)debugMenu;
- (id)scannerResult;
- (id)boundingQuads;
- (void)createChildrenIfNecessary;
- (id)initWithBarcodeObservation:(id)a0 action:(id)a1;
- (BOOL)isMRCDataDetector;

@end
