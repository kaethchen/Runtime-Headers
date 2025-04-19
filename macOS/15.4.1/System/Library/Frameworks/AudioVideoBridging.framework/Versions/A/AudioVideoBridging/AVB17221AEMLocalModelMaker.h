@interface AVB17221AEMLocalModelMaker : AVB17221AEMModelMaker {
    unsigned short _inputClusterCount;
    unsigned short _outputClusterCount;
}

+ (id)localEntityModelForEntityModel:(id)a0 onInterface:(id)a1 usingRemoteMACAddress:(id)a2;
+ (void)setLocalModelMakerModelName:(id)a0;

- (id)audioClusterForAudioCluster:(id)a0;
- (id)audioUnitForAudioUnit:(id)a0 addToMappings:(id)a1;
- (id)inputStreamPortForOutputStreamPortAudio:(id)a0 addToMappings:(id)a1;
- (id)localEntityModelForEntityModel:(id)a0 onInterface:(id)a1 usingRemoteMACAddress:(id)a2;
- (void)localToRemoteMappings:(id)a0 andRemoteToLocalMappings:(id)a1 fromOldNewMappings:(id)a2;
- (id)outputStreamPortForInputStreamPortAudio:(id)a0 addToMappings:(id)a1;
- (BOOL)processAudioUnit:(id)a0 inConfiguration:(id)a1 withOldNewMappings:(id)a2 ofEntityModel:(id)a3 withLocalToRemoteMappings:(id)a4 andRemoteToLocalMappings:(id)a5;
- (BOOL)processClockSource:(id)a0 inConfiguration:(id)a1 withOldNewMappings:(id)a2 ofEntityModel:(id)a3 withLocalToRemoteMappings:(id)a4 andRemoteToLocalMappings:(id)a5;
- (BOOL)processVideoUnit:(id)a0 inConfiguration:(id)a1 withOldNewMappings:(id)a2 ofEntityModel:(id)a3 withLocalToRemoteMappings:(id)a4 andRemoteToLocalMappings:(id)a5;
- (void)removeMappingForObject:(id)a0 fromOldNewMappings:(id)a1;
- (id)sensorUnitForSensorUnit:(id)a0 addToMappings:(id)a1;
- (id)streamForStream:(id)a0 hasAudio:(BOOL)a1 hasVideo:(BOOL)a2;
- (id)videoClusterForVideoCluster:(id)a0;
- (id)videoUnitForVideoUnit:(id)a0 addToMappings:(id)a1;

@end
