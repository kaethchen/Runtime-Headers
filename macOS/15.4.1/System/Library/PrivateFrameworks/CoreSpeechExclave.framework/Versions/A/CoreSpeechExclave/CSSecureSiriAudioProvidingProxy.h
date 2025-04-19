@interface CSSecureSiriAudioProvidingProxy : NSObject {
    struct corespeechexclave_sirivoicetriggerservice_s { struct tb_connection_s *connection; } _service;
    struct tb_endpoint_s { union { char x0[96]; void *x1; } x0; } *_tightbeamEndpoint;
}

- (id)init;
- (void)reset;
- (BOOL)configAOPVoiceTrigger;
- (void)fetchAOPVoiceTriggerResult:(id /* block */)a0;
- (BOOL)initializeSecondPass;
- (void)processBargeInVoiceTriggerWithResult:(id /* block */)a0;
- (void)processSecondPassVoiceTriggerWithShouldFlushAudio:(BOOL)a0 result:(id /* block */)a1;
- (void)resetFirstPassVoiceTrigger;
- (void)setAssetForLocale:(id)a0 isOTA:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)setSpeakerProfile:(id)a0 numEmbeddings:(unsigned long long)a1 dimension:(unsigned long long)a2 speakerRecognizerType:(unsigned long long)a3;
- (void)startBargeInVoiceTrigger;
- (void)stopBargeInVoiceTrigger;
- (void)stopSecondPassVoiceTrigger;
- (BOOL)prepare:(int)a0;
- (unsigned long long)convertAssetConfigurationError:(unsigned long long)a0;
- (void)adBlockerMatchingInProgress:(id /* block */)a0;
- (unsigned long long)convertSecureBargeInVoiceTriggerResultType:(struct corespeechexclave_bargeinvoicetriggerresult_s { unsigned long long x0; union { struct { struct corespeechexclave_bargeinvoicetriggerresulttriggered_s { unsigned long long x0; unsigned int x1; } x0; } x0; } x1; })a0;
- (unsigned long long)convertSecureSecondPassVoiceTriggerResultType:(struct corespeechexclave_voicetriggersecondpassresult_s { unsigned long long x0; union { struct { struct corespeechexclave_voicetriggersecondpassresulttriggered_s { unsigned long long x0; double x1; unsigned int x2; unsigned long long x3; unsigned long long x4; struct corespeechexclave_voicetriggerkeyworddetectionresult_s { unsigned long long x0; } x5; struct corespeechexclave_voicetriggerpersonalizationresult_s { unsigned long long x0; } x6; } x0; } x0; struct { struct corespeechexclave_voicetriggersecondpassresultrejected_s { unsigned int x0; struct corespeechexclave_voicetriggerkeyworddetectionresult_s { unsigned long long x0; } x1; struct corespeechexclave_voicetriggerpersonalizationresult_s { unsigned long long x0; } x2; } x0; } x1; struct { struct corespeechexclave_voicetriggersecondpassresultfailed_s { unsigned long long x0; } x0; } x2; } x1; })a0;
- (unsigned long long)convertSecureSpeakerRecognitionType:(unsigned long long)a0;
- (unsigned long long)convertSecureVoiceTriggerKeywordDetectionResultType:(struct corespeechexclave_voicetriggerkeyworddetectionresult_s { unsigned long long x0; })a0;
- (unsigned long long)convertSecureVoiceTriggerSpeakerDetectionResultType:(struct corespeechexclave_voicetriggerpersonalizationresult_s { unsigned long long x0; })a0;
- (BOOL)fetchAndStoreAudioBuffer;
- (unsigned long long)processBargeInVoiceTrigger;
- (void)requestHistoricalAudioBufferWithStartSample:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)setAdBlockerAsset:(id /* block */)a0;
- (void)startAdBlockerMatching;
- (void)startSecondPassVoiceTriggerWithStartOption:(struct { unsigned long long x0; BOOL x1; BOOL x2; unsigned int x3; })a0;
- (void)startSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)startSecureMobileAssetLoaderService:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopAdBlockerMatching;
- (void)stopSecureAdBlockerMobileAssetLoaderService:(id /* block */)a0;
- (void)stopSecureMobileAssetLoaderService:(id /* block */)a0;

@end
