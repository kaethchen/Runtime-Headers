@class NSString, SLContentStream, MXMDisplayDescriptor;
@protocol MXMDisplayProbePlatformDelegate;

@interface MXMDisplayProbe_macOS_Internal : NSObject <MXMDisplayProbePlatform> {
    SLContentStream *_stream;
    MXMDisplayDescriptor *_target;
}

@property (weak, nonatomic) id<MXMDisplayProbePlatformDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allDescriptors;

@end
