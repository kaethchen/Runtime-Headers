@class NSString, NSSet, NSURL, NSDate, CLLocation, SHShazamKey;

@interface SHMediaLibraryTrackBuilder : NSObject

@property (retain) NSDate *creationDate;
@property (copy) NSString *recognitionIdentifier;
@property (retain) SHShazamKey *shazamKey;
@property (copy) NSString *providerName;
@property (copy) NSString *providerIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (retain) CLLocation *location;
@property (retain) NSURL *artworkURL;
@property (retain) NSURL *shazamURL;
@property (retain) NSSet *labels;

- (void).cxx_destruct;
- (id)initWithCreationDate:(id)a0;

@end
