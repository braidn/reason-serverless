let handler: AwsLambda.APIGatewayProxy.handler =
(_event, _context, cb) => {
  cb(
    Js.null,
    AwsLambda.APIGatewayProxy.result(
      ~body=`Plain("Hello from reason code!"),
      ~statusCode=200,
      ()
    )
  );
  Js.Promise.resolve();
};
