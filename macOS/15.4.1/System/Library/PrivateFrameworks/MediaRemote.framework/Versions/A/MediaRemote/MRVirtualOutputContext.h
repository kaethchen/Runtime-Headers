@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (void).cxx_destruct;
- (unsigned int)type;
- (id)uniqueIdentifier;
- (id)contextID;
- (void)setVolume:(float)a0;
- (float)volume;
- (id)initWithUID:(id)a0;
- (id)outputDevices;
- (id)predictedOutputDevice;
- (void)resetPredictedOutputDevice;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)isVolumeControlAvailable;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)supportsVolumeControl;

@end
