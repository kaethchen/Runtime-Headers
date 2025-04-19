@interface IKImageCellTrackingViewDatasourceProxy : IKImageCellDatasourceProxy {
    id _viewIdentifier;
}

- (void)dealloc;
- (void)setViewIdentifier:(id)a0;
- (id)viewIdentifier;
- (id)_datasourceImageRepresentation:(BOOL)a0;
- (id)_datasourceImageRepresentationType;
- (id)copyQuicklookURL;

@end
