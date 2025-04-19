@class NSString;

@interface _NSAlignmentFeedbackFilterPreparedContext : NSObject <NSAlignmentFeedbackToken> {
    double _timestamp;
    struct { unsigned char hasX : 1; unsigned char hasY : 1; unsigned char hasSignificantXAlignment : 1; unsigned char hasSignificantYAlignment : 1; unsigned int padding : 28; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
