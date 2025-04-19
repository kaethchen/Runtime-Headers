@class NSString, VCSandboxedURL;
@protocol AVCMediaRecorderRequestDelegate;

@interface AVCMomentsRequest : NSObject {
    id _weakDelegate;
    unsigned char _mode;
    VCSandboxedURL *_directoryURL;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _movieFragmentInterval;
}

@property (weak, nonatomic) id<AVCMediaRecorderRequestDelegate> delegate;
@property (readonly, nonatomic) BOOL hasDirectoryURL;
@property (readonly, nonatomic) NSString *transactionID;
@property (readonly, nonatomic) unsigned char mediaType;
@property (readonly, nonatomic) NSString *requesterID;
@property (readonly, nonatomic) NSString *requesteeID;

+ (id)invalidDelegateInstanceError;

- (void)dealloc;
- (id)description;
- (id)serialize;
- (BOOL)validateWithError:(id *)a0;
- (BOOL)startWithError:(id *)a0;
- (BOOL)rejectWithError:(id *)a0;
- (BOOL)endWithError:(id *)a0;
- (id)initWithConfiguration:(id)a0 requesterID:(id)a1;
- (id)initWithConfiguration:(id)a0 requesterID:(id)a1 transactionID:(id)a2;
- (BOOL)setUpDirectoryURLWithConfiguration:(id)a0;
- (BOOL)setUpMovieFragmentIntervalWithConfiguration:(id)a0;

@end
