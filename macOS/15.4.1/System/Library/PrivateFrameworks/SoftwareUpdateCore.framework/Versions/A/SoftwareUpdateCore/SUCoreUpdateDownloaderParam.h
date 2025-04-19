@class SUCoreProgress, NSError, NSString;

@interface SUCoreUpdateDownloaderParam : NSObject {
    int _type;
}

@property (readonly, retain, nonatomic) SUCoreProgress *progress;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSString *note;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)initWithNote:(id)a0;
- (id)initWithProgress:(id)a0;

@end
