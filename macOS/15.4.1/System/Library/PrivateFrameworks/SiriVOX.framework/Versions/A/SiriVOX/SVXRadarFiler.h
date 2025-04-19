@protocol SVXTapToRadarService;

@interface SVXRadarFiler : NSObject <SVXRadarFiling> {
    id<SVXTapToRadarService> _ttrService;
}

- (id)init;
- (void).cxx_destruct;
- (void)fileRadar:(id)a0 processName:(id)a1 displayReason:(id)a2 completion:(id /* block */)a3;
- (BOOL)supportsRadarFiling;

@end
