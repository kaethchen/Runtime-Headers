@class NSString, PLAdditionalAssetAttributes, NSDate, NSNumber;

@interface PLUnmanagedAdjustment : PLManagedObject

@property (retain, nonatomic) NSNumber *adjustmentBaseImageFormat;
@property (retain, nonatomic) NSString *adjustmentFormatIdentifier;
@property (retain, nonatomic) NSString *adjustmentFormatVersion;
@property (retain, nonatomic) NSDate *adjustmentTimestamp;
@property (retain, nonatomic) NSString *editorLocalizedName;
@property (retain, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic) unsigned int adjustmentRenderTypes;

+ (id)entityName;
+ (BOOL)_assetAdjustmentsHasValidDataType:(id)a0;
+ (id)_convertRedEyeCorrection:(id)a0 withOrientation:(long long)a1;
+ (id)_convertRedEyeCorrections:(id)a0 withOrientation:(long long)a1;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)a0;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)a0 forPlaceholderAsset:(id)a1 inLibrary:(id)a2 error:(id *)a3;

- (void)awakeFromInsert;
- (void)willSave;
- (id)_adjustmentEnvelopeFromAssetAdjustments:(id)a0 error:(id *)a1;
- (unsigned int)_cameraAutoRenderTypeFromAssetAdjustments:(id)a0 adjustmentEnvelope:(id *)a1;
- (id)_deserializeAdjustmentEnvelopeIfNeededFromAssetAdjustments:(id)a0 adjustmentEnvelope:(id *)a1 error:(id *)a2;
- (unsigned int)_processEnabledAdjustmentFromAssetAdjustments:(id)a0 identifier:(id)a1 adjustmentEnvelope:(id *)a2 processingBlock:(id /* block */)a3;
- (unsigned int)_styleCastRenderTypeFromAssetAdjustments:(id)a0 settingPayload:(id)a1 adjustmentEnvelope:(id *)a2;
- (BOOL)isSyncableChange;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (BOOL)supportsCloudUpload;
- (BOOL)updateRenderTypeFlagsForAssetAdjustments:(id)a0 checkFlag:(unsigned short)a1 settingPayload:(id)a2;

@end
