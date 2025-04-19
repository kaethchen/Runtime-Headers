@interface AUGenericViewFactory : NSObject <AUCocoaUIBase>

- (id)description;
- (unsigned int)interfaceVersion;
- (id)uiViewForAudioUnit:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
