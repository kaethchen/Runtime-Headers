@class CBRTPLCParams, NSObject;
@protocol OS_os_log;

@interface CBBacklightNode : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned int _service;
}

@property (readonly) int grimaldiSamplingStrategy;
@property (readonly) CBRTPLCParams *rtplc;

- (void)dealloc;
- (id)initWithService:(unsigned int)a0;
- (struct __CFDictionary { } *)copyRestrictionDictionaryMultiPoint;
- (unsigned int *)createMultipointArrayCommon:(id)a0 unitSize:(unsigned long long *)a1 outputCount:(unsigned long long *)a2;
- (int)createMultipointRestrictionArrayForThresholdsName:(id)a0 andFactorsName:(id)a1 andThresholds:(id *)a2 andFactors:(id *)a3;
- (void)initPropertiesFromService:(unsigned int)a0;
- (id)newMultiPointFactorsArray:(id)a0;
- (id)newMultiPointThresholdsArray:(id)a0;

@end
