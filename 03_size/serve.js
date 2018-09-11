const express = require('express')
const app = express()

express.static.mime.define({'application/wasm': ['wasm']})

app.use(express.static('build'))
app.listen(8000, () => console.log('Serving at http://localhost:8000!'))
