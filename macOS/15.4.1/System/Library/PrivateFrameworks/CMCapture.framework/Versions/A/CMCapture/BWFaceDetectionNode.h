@class NSArray, NSSet, NSDictionary, BWNodeOutput;

@interface BWFaceDetectionNode : BWFanOutNode {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectOfInterest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rectOfInterestLock;
    BOOL _metadataObjectOutputEnabled;
    BOOL _boxedMetadataOutputEnabled;
    BOOL _emitsEmptyObjectDetectionMetadata;
    NSSet *_enabledDetectedObjectTypes;
    int _lastObjectFaceCount;
    int _lastDetectedObjectsCount;
    unsigned int _localIDsForFaces_BE[5];
    unsigned int _localIDsForDetectedHumanBodies_BE[3];
    unsigned int _localIDsForDetectedCatBodies_BE[3];
    unsigned int _localIDsForDetectedDogBodies_BE[3];
    unsigned int _localIDsForDetectedSalientObjects_BE[3];
    NSDictionary *_detectionTimingInfoByBoxedOutput;
    unsigned int _localIDOfDetectedFace_BE;
    unsigned int _localIDOfDetectedFaceFaceID_BE;
    unsigned int _localIDOfDetectedFaceBounds_BE;
    unsigned int _localIDOfDetectedFaceRoll_BE;
    unsigned int _localIDOfDetectedFaceYaw_BE;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startMarkerBufferPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _prevBoxedFacePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _prevBoxedFaceDur;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _prevBoxedNoFacePTS;
    int _lastBoxedFaceCount;
    unsigned int _recordCollectionAtomIdentifier_BE;
    unsigned int _collectionItemsAtomIdentifier_BE;
    long long _previousDetectedFacesTimestamp;
    long long _previousDetectedObjectsTimestamp;
}

@property (readonly) BWNodeOutput *metadataObjectOutput;
@property (readonly) NSArray *boxedMetadataOutputs;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (BOOL)emitsEmptyObjectDetectionMetadata;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfInterest;
- (void)setEmitsEmptyObjectDetectionMetadata:(BOOL)a0;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMetadataObjectOutputEnabled:(BOOL)a0;
- (BOOL)boxedMetadataOutputEnabled;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithObjectMetadataIdentifiers:(id)a0 movieFileOutputMetadataIdentifierGroups:(id)a1;
- (BOOL)metadataObjectOutputEnabled;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBoxedMetadataOutputEnabled:(BOOL)a0;

@end
