@interface _TtCV16PassKitMacHelperP33_83DA9F47AA2E83D7C8A9BC58268E7F8410CameraView11Coordinator : NSObject <CRCameraReaderDelegate> {
    void /* unknown type, empty encoding */ onObjectsCaptured;
    void /* unknown type, empty encoding */ objects;
}

- (id)init;
- (void).cxx_destruct;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;

@end
