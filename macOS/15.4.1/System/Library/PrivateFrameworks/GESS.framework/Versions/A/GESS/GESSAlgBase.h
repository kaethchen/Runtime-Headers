@interface GESSAlgBase : NSObject {
    id /* block */ _progress_callback;
    id /* block */ _error_callback;
}

@property int algStatus;

- (id)init;
- (BOOL)run;
- (void).cxx_destruct;
- (BOOL)setErrorCallback:(id /* block */)a0;
- (id)returnReport;
- (BOOL)setProgressCallback:(id /* block */)a0;

@end
